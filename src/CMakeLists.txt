# Add executable
add_executable(CPP2P 
    main.cpp
    gui.h
    socket.cpp
)
target_link_libraries(CPP2P PRIVATE ImGui-SFML::ImGui-SFML)
# this is to compile as windows app - no terminal
# set_target_properties(CPP2P PROPERTIES WIN32_EXECUTABLE TRUE)