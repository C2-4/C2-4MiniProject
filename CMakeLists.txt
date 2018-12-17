cmake_minimum_required(VERSION 2.8.3)
project(move_turtlesim)

find_package(catkin REQUIRED roscpp turtlesim geometry_msgs)

catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
)

#add_executable(test1 src/test1.cpp)
#target_link_libraries(test1
#  ${catkin_LIBRARIES}
#)

#add_executable(test2 src/test2.cpp)
#target_link_libraries(test2
#  ${catkin_LIBRARIES}
#)

#add_executable(test3 src/test3.cpp)
#target_link_libraries(test3
#  ${catkin_LIBRARIES}
#)

#add_executable(test4 src/test4.cpp)
#target_link_libraries(test4
#  ${catkin_LIBRARIES}
#)

#add_executable(test5 src/test5.cpp)
#target_link_libraries(test5
#  ${catkin_LIBRARIES}
#)

#add_executable(test6 src/test6.cpp)
#target_link_libraries(test6
#  ${catkin_LIBRARIES}
#)

#add_executable(final_testing1 src/final_testing1.cpp)
#target_link_libraries(final_testing1
#  ${catkin_LIBRARIES}
#)

#add_executable(final_testing2 src/final_testing2.cpp)
#target_link_libraries(final_testing2
#  ${catkin_LIBRARIES}
#)

#add_executable(final_testing3 src/final_testing3.cpp)
#target_link_libraries(final_testing3
#  ${catkin_LIBRARIES}
#)

#add_executable(final_testing4 src/final_testing4.cpp)
#target_link_libraries(final_testing4
#  ${catkin_LIBRARIES}
#)

#add_executable(distance_A src/distance_A.cpp)
#target_link_libraries(distance_A
#  ${catkin_LIBRARIES}
#)

#add_executable(distance_B src/distance_B.cpp)
#target_link_libraries(distance_B
#  ${catkin_LIBRARIES}
#)

#add_executable(distance_C src/distance_C.cpp)
#target_link_libraries(distance_C
#  ${catkin_LIBRARIES}
#)

#add_executable(avoid_function_1 src/avoid_function_1.cpp)
#target_link_libraries(avoid_function_1
#  ${catkin_LIBRARIES}
#)

#add_executable(avoid_function_2 src/avoid_function_2.cpp)
#target_link_libraries(avoid_function_2
#  ${catkin_LIBRARIES}
#)

#add_executable(avoid_function_3 src/avoid_function_3.cpp)
#target_link_libraries(avoid_function_3
#  ${catkin_LIBRARIES}
#)

#add_executable(avoid_function_4 src/avoid_function_4.cpp)
#target_link_libraries(avoid_function_4
#  ${catkin_LIBRARIES}
#)

add_executable(mini_move src/mini_move.cpp)
target_link_libraries(mini_move
  ${catkin_LIBRARIES}
)

add_executable(mini_timer src/mini_timer.cpp)
target_link_libraries(mini_timer
  ${catkin_LIBRARIES}
)

#add_executable(talker src/talker.cpp)
#target_link_libraries(talker
#  ${catkin_LIBRARIES}
#)

#add_executable(listener src/listener.cpp)
#target_link_libraries(listener
#  ${catkin_LIBRARIES}
#)
