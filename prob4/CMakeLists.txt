cmake_minimum_required(VERSION 3.14)

foreach(prob IN ITEMS prob4-1 prob4-2 prob4-3)
  message(STATUS "=== Start adding ${prob} ===")
  add_subdirectory(${prob})
  message(STATUS "=== Finished adding ${prob} ===")
endforeach()
