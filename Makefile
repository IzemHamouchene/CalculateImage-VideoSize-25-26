test_grayScaleImage: 
	cd config/; gcc mainGrayScaleImage.c assert_with_message.c ../GrayScaleImage.c -o ../result1
	./result1

test_coloredBitmap: 
	cd config/; gcc mainColoredBitmap.c assert_with_message.c ../ColoredBitmap.c -o ../result2
	./result2

test_video: 
	cd config/; gcc mainvideo.c assert_with_message.c ../video.c -o ../result3
	./result3
