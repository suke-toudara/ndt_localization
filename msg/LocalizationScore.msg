std_msgs/Header header

# Registration results
bool has_converged
float64 fitness_score
float64 transformation_probability
int32 final_num_iteration

# Alignment time
float64 align_time

# Transformation matrix (4x4)
float64[16] final_transformation
