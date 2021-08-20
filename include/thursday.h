#include<thread>

void sleepTimer(void) {
  int milliseconds = 10000;
  std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds)); 
}


void joinDetachThreads(void) {
	std::cout << " - joinDetachThreads: not yet implemented\n\n";
}