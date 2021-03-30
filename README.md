# CreateHourImage

This program uses [izanbf1803/EasyBMP](https://github.com/izanbf1803/EasyBMP) to create an image to be displayed by my Divoom Pixoo. 

The goal was to display the current hour in multiple different time zones. Since there is no official API for Divoom devices, the easiest way to achieve this 
is to generate an image and send it to the Pixoo via Bluetooth, using [MattIPv4/divoom-control](https://github.com/MattIPv4/divoom-control)'s `display-image` function.
This code gets the current timestamp from the host, converts it into UTC time and from there into EST and PST (DST included by (un)commenting a line, screw detecting 
that automatically). Those hours are then written as numbers into a bitmap, which then can be uploaded.  
I just cron this on my Pi every 5 minutes with some extra checks, since this is the time after which the Pixoo will go back to showing something different.
