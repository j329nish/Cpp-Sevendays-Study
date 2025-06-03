cmake_minimum_required(VERSION 3.14)

foreach(prob IN ITEMS prob1-1 prob1-2 prob1-3 prob1-4 prob1-5 prob1-6 prob1-7)
  message(STATUS "=== Start adding ${prob} ===")
  add_subdirectory(${prob})
  message(STATUS "=== Finished adding ${prob} ===")
endforeach()
