# Master 1 SII : Multimédia
## TP 2 : Calculate size images/video
The purpose of this lab work is to put into practice the concepts learned during the [course](https://canvas.instructure.com/courses/13255575/files/317542377) for processing grayscale images, color images, and video.

**Reminder**  
Each pixel in a grayscale image is encoded on 8 bits. 
For the conversion:
  
* 1 octet = 8 bits  
* 1 ko = 1024 octet  
* 1 mo = 1024 ko  
* 1 go = 1024 mo  


### Exercice 1 : ([GrayScale Image size](grayScaleImage.c))
You are asked to write a C program that calculates the size of a grayscale image (**in ko**)

#### Input parameters (2)
The program receives two input parameters (the height and width) of the image in integer format.

#### Output parameter (1)
The program must return the size of the grayscale image.<br>
_The output values must be returned with two digits after the decimal point._


### Exercice 2 : ([Color Bitmap image size](coloredBitmap.c))
You are asked to write a C program that calculates the size of a color image (**in mo**)

#### Input parameters (3)
The program receives three input parameters
1. Height of the image
2. Width of the image
3. Unit. The unit can be 'bt', 'ko', 'mo', or 'go'.

If unit = 'bt', the function should return the image size in bits.<br>
If unit = 'ko', the result should be converted to kilobits.<br>
Similarly, for 'mo' → megabits, and 'go' → gigabits.


#### Output parameter (1)
The program must return the size of the color image.<br>
_The output values must be returned with two digits after the decimal point._


### Exercise 3: ([Video size](video.c))
You are required to write a C program that calculates the size of a video. The video starts with color images and ends with black and white images (Credits).

#### Input Parameters (3)
The program receives the following parameters (in order):
1. Height of the image
2. Width of the image
3. Duration of the movie
4. Duration of the credits
5. Frame per second (FPS)
6. Unit. The unit can be 'bt', 'ko', 'mo', or 'go'.

#### Output Parameter (1)
The program must return the size of the video (based on the selected unit)<br>
_The output values must be returned with two digits after the decimal point._
