define myLaser ranger 
( 
  sensor( range [ 0 20 ] fov 180.0 samples 180 ) 
  size [0.1 0.1 0.1] 
  color "black" 
  block( 
	points 4 
	point[0] [0 0] 
	point[1] [0.1 0] 
	point[2] [0.1 0.1] 
	point[3] [0 0.1] 
	z [0 0.1] 
	) 
) 

define picker position 
( 
  size [1 1.1 0.5] 
  drive "diff" 
  block( 
	points 4 
	point[0] [0 0] 
	point[1] [1 0] 
	point[2] [1 1] 
	point[3] [0 1] 
	z [0 .5] 
	) 
  myLaser(pose [ 0.6 0 -0.2 0 ]) 
#  bitmap "robot.png" 
) 