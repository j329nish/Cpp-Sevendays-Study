cmake_minimum_required(VERSION 3.14)

foreach(prob IN ITEMS prob2-1 prob2-2)
  message(STATUS "=== Start adding ${prob} ===")
  add_subdirectory(${prob})
  message(STATUS "=== Finished adding ${prob} ===")
endforeach()
