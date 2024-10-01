# Multi-Agent-based-Search-and-Rescue-system-in-ROS

A search and rescure bot which will detect humans in hazardous location and navigate them to nearest exit




## Deliverables
* Project: Project Finder is search and rescue robot for hazardous environment
* Overview of prosposed work, including risks, mitigation, timeline
* UML and activity diagrams
* Developer-level documentation




## Dependencies with licenses
* OpenCV 4.5.0 (covered under the open-source Apache 2 License)
* ROS Noetic 
* Move_base 
* Gazebo 
* GTest





## Installation

### Install Requirements
```
bash ros_requirements.bash
run 
./requirements.sh
```


### Clone git repository

```
cd bot_ws/src
Clone git repository

```

### Execution of code
```
cd ~/bot_ws/src
catkin_make
source devel/setup.bash
```
In terminal 1
```
source devel/setup.bash
roslaunch project_finder main.launch
```
In terminal 2
```
source devel/setup.bash
rosrun project_finder finder
```
# Results


# ROS Test
* All the current 29 tests (gtest + rostest) for this projects are passing.
```
cd ~/finderbot_ws/src
catkin_make
catkin_make run_tests
```





