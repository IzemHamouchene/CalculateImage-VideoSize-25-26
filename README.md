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


### Exercice 1 : Image size (CalculateImageSize_grayscale.c)
You are asked to write a C program that calculates the size of a grayscale image (**in ko**)

#### Input parameters (2):
The program receives two input parameters (the height and width) of the image in integer format.

#### Output parameter (1)
The program must return the size of the grayscale image.
_The output values must be returned with two digits after the decimal point._


### Exercice 2 : Image size (CalculateImageSize_color.c)
You are asked to write a C program that calculates the size of a color image (**en mo**)

#### Input parameters (2)
The program receives two input parameters (the height and width) of the image in integer format.

#### Output parameter (1)
The program must return the size of the color image.
_The output values must be returned with two digits after the decimal point._


### Exercise 3: Video Size (CalculateVideo.c)
You are required to write a C program that calculates the size of a video in which half of the duration consists of grayscale images and the other half consists of color images.
Example: if the video lasts 4 minutes, 2 minutes are grayscale and 2 minutes are color.

#### Input Parameters (3)
The program receives the following parameters (in order):
1. Size of a grayscale image (in KB)
2. Duration of the video (in seconds)
3. FPS (Frames Per Second)

#### Output Parameter (1)
The program must return the size of the video (half the time in grayscale and the other half in color) (in GB)
_The output values must be returned with two digits after the decimal point._
