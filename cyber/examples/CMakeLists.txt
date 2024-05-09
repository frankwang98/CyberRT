project(examples VERSION 1.0.0)

# talker
add_executable(cyber_example_talker talker.cc proto/examples.pb.cc)
target_link_libraries(cyber_example_talker
    ${TARGET_NAME}
    pthread
)

# listener
add_executable(cyber_example_listener listener.cc proto/examples.pb.cc)
target_link_libraries(cyber_example_listener
    ${TARGET_NAME}
    pthread
)

# paramserver
add_executable(cyber_example_paramserver paramserver.cc)
target_link_libraries(cyber_example_paramserver
    ${TARGET_NAME}
)

# record
add_executable(cyber_example_record record.cc)
target_link_libraries(cyber_example_record
    ${TARGET_NAME}
)

# service
add_executable(cyber_example_service service.cc proto/examples.pb.cc)
target_link_libraries(cyber_example_service
    ${TARGET_NAME}
)

add_subdirectory(common_component_example)
add_subdirectory(timer_component_example)
