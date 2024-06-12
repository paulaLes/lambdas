#include <chrono>
#include <iostream>
#include <functional> 
#include <thread>


template <typename Func, typename... Args>
void schedule(Func func, std::chrono::seconds duration, Args... args) {
  
  std::this_thread::sleep_for(duration);
  func(args...);
}
