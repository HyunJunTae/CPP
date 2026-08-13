#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;


struct job {
    int id; // 작업 ID
    int s; // 작업 요청 시점 시간
    int l; // 작업 소요 시간
};

struct compare_all {
    bool operator()(const job& one, const job& other) {
        // 작업 소요 시간이 낮은걸 우선. 내꺼가 작으면 false (내꺼가 순위가 밀리냐? true)
        if (one.l > other.l) return true;
        else if (one.l < other.l) return false;

        // 작업 소요 시간 같은 경우, 작업 요청 시각이 빠른 것, 즉 작으면 우선. 내꺼가 작으면 false
        if (one.s > other.s) return true;
        else if (one.s < other.s) return false;

        // 이거도 같은 경우, ID가 작으면 우선. 내꺼가 ID 더 작으면 false
        return one.id > other.id;
    }  
};

struct compare_s {
    bool operator()(const job& one, const job& other) {

        // 작업 요청 시각이 빠른 것, 즉 작으면 우선. 내꺼가 작으면 false
        if (one.s > other.s) return true;
        else if (one.s < other.s) return false;
        
        // 작업 요청 시각이 같은 경우에는, 작업 소요 시간이 낮은걸 우선. 내꺼가 작으면 false
        if (one.l > other.l) return true;
        else if (one.l < other.l) return false;

        // 이거도 같은 경우, ID가 작으면 우선. 내꺼가 ID 더 작으면 false
        return one.id > other.id;
    }  
};



int solution(vector<vector<int>> jobs) {
    int answer = 0;
    
    // 0. job 개수 저장
    int jobs_size = jobs.size();
    
    // 모든 jobs의 데이터들을 id를 포함해서 job 구조체 vector 생성
    vector<job> v_jobs;
    job temp_job;
    for (int i=0; i<jobs_size; ++i) {
        temp_job.id = i;
        temp_job.s = jobs[i][0];
        temp_job.l = jobs[i][1];
            
        v_jobs.push_back(temp_job);
    }
    
    // 1. 모든 job 을 요청 시각 기준으로 오름차순으로 담는 우선순위 큐 생성
    priority_queue<job, vector<job>, compare_s> jobs_ordered_by_rt(v_jobs.begin(), v_jobs.end());
    
    
    // 2. 순서대로 job 처리 및 total_time 계산
    int time = 0, total_time = 0;
    job current_job, check_job;
    priority_queue<job, vector<job>, compare_all> jobs_ready;
    while(true) {
        // 2-1. 현재 시간보다 요청 시각 값이 작은 job 을 jobs_ready 에 담기
        // jobs_ordered_by_rt 가 비어있으면, 담지 않고 넘어감.
        if (!jobs_ordered_by_rt.empty()) {
        
            check_job = jobs_ordered_by_rt.top();
            
            cout << check_job.id << check_job.s << check_job.l << endl;
            
            if (check_job.s <= time) {
                jobs_ordered_by_rt.pop();
                jobs_ready.push(check_job);
                continue;
            }
            
        }
        
        
        // 2-2. 준비된 작업이 있나 확인. 없다면 jobs_ordered_by_rt 에서 top의 시간까지 타임리프
        if (jobs_ready.empty()) {
            time = check_job.s;
            continue;
        }
        

        // 2-3. 준비된 작업 중에서 하나 pop 해서, 해당 job 처리.
        current_job = jobs_ready.top();
        jobs_ready.pop();
        
        time += current_job.l;
        
        total_time += (time - current_job.s);
        
        cout << total_time << endl;
        
        // 2-4. 만약 두 개의 우선순위 큐가 비어있다면 작업 모두 처리한 것 -> break.
        if (jobs_ordered_by_rt.empty() && jobs_ready.empty()) break;
    }
    
    answer = total_time / jobs_size;
    
    return answer;
}