
#ifndef INCLUDE_PROJECT_FINDER_POSE_HPP_
#define INCLUDE_PROJECT_FINDER_POSE_HPP_
/**
 * @brief Structure to store waypoints in ROS format
 * x, y, z - positions
 * roll, pitch, yaw - euler angles
 * qx, qy, qz, qw - quaternion
 * 
 * 
 */
struct Pose {Pose(double x = 0.0, double y = 0.0, double z = 0.0,
double roll = 0.0, double pitch = 0.0, double yaw = 0.0,
double qx = 0.0, double qy = 0.0, double qz = 0.0, double qw =  1.0) :
x(x), y(y), z(z),
roll(roll), pitch(pitch), yaw(yaw),
qx(qx), qy(qy), qz(qz), qw(qw) {}

~Pose() {}

double x, y, z, roll, pitch, yaw, qx, qy, qz, qw;
};
#endif  // INCLUDE_PROJECT_FINDER_POSE_HPP_
