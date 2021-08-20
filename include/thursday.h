#include<thread>

//times are declared globally in seconds
const int time1 = 5;
const int time2 = 10;


void sleepTimer(void) {
  //amount of seconds to block further execution
  int seconds = 10;
  //gets the thread and pauses it for 10 seconds
  std::this_thread::sleep_for(std::chrono::seconds(seconds)); 
}

void timer1(){
  //provides thread id and displays that it has started for timer 1
  std::cout << "timer 1 - thread: " << std::this_thread::get_id() << " started\n";
  //gets the thread and pauses it for time1 seconds
  std::this_thread::sleep_for(std::chrono::seconds(time1)); 
  //provides thread id and displays that it has ended for timer 1
  std::cout << "timer 1 - thread: " << std::this_thread::get_id() << " ended\n";
}

void timer2(){
  //provides thread id and displays that it has started for timer 2
  std::cout << "timer 2 - thread: " << std::this_thread::get_id() << " started\n";
  //gets the thread and pauses it for time2 seconds
  std::this_thread::sleep_for(std::chrono::seconds(time2));
  //provides thread id and displays that it has ended for timer 2 
  std::cout << "timer 2 - thread: " << std::this_thread::get_id() << " ended\n";
}

void joinThreads(){
  //Joining Threads
  //provides thread id and displays that the main thread has started
  std::cout << "Main thread: " << std::this_thread::get_id() << " started\n";
  //creates thread 1 and runs timer 1
  std::thread thread1(timer1);
  //creates thread 2 and runs timer 2
  std::thread thread2(timer2); 
  //blocks main thread until complete
  thread1.join();
  //blocks main thread until complete
  thread2.join();
  //provides thread id and displays that the main thread has ended
  std::cout << "Main thread: " << std::this_thread::get_id() << " ended\n";    
}

void detachThreads(){
  //Detach Threads
  //provides thread id and displays that the main thread has started
  std::cout << "Main thread: " << std::this_thread::get_id() << " started\n";
  //creates thread 1 and runs timer 1
  std::thread thread1(timer1);
  //creates thread 2 and runs timer 2
  std::thread thread2(timer2);
  //executes seperately
  thread1.detach();
  //executes seperately
  thread2.detach();
  //provides thread id and displays that the main thread has ended
  std::cout << "Main thread: " << std::this_thread::get_id() << " ended\n";
}

void joinDetachThreads(void) {
  joinThreads();
  detachThreads();
}