# Synthmas 23 End of Year Contest

TODO: Make a better intro.
Hello all, this is is my 2023 Synthmas Contest submission. I hope you enjoy.

## Project Goals

- Create a Synth that is extremely simple and intuitive to use.
- Have the device be easily pocketable.
- Be in guidelines for the Synthmas contest.

The guidelines for the contest are available to here. Tl;dr: Create an open source synthesizer/effect using the Daisy and the MPR121 touch sensor with a demo video.

## Personal Goals
Even with the project goals I thought that I should still take this challenge as a learning opportunity. So my personal goals for the project are as possible

- Unit test all of the code using Google Test.
- Document Everything.
- Create this as I would a normal open source project. 

## Ideation

This idea came about from playing Street Fighter 6 the past couple of months. The idea being, what if I could take a leverless fight stick (a controller made for fighting games) and turn it into a musical instrument. 

At first I thought that it could maybe be a group box or looper of some sort. The idea being that the user would have to input commands in order to get certain functions from the synthesizer.  I made many quick sketches of this idea, but ultimately decided that it would be A. To much to implement in 3 weeks, B. It goes against what makes these controllers so good in the first place. 

See fight sticks are good for one thing, controlling one character/object/sound. As soon as you have to switch sounds or change certain parameters they feel horrible to use. So I instead decided to make it control one instrument really well. For this I decided the Singing Bowl would be a really good instrument to try and emulate. **I could use the touch plates to let the user control how hard the instrument is being played and the arcade buttons to control which bowl is being played.**  

But it needed to have a reason to be digital. You can already get the Titian bowls right now if you want to, so why get this. I thought it would be a cool idea if the bowls could self play, or at least have some sort of turning machine recording function. Currently I have some ideas of how to do this but nothing concrete yet. 

## CAD Files
First we nee to make an enclosure and get the parts for this project. I got this cheapest touch sensors and arcade buttons off of amazon. Then I got to work on finalizing the cad design. 

I decided that 6 voices would be more than enough, then it will comfortably fit in your hand and you can easily press your thumbs against the touch sensors. Using a template I found online I used the common specs found for movement buttons of a leverless controller. I then recreated a basic front panel in OpenScad. 

I decided against creating a full box for the first version since I just wanted to worry about the code and getting it done in time. However, If I ever make another version I will for sure have a custom PCB that is a lot thinner. 

Finally I made the touch sensitive parts be square. That way it is easily ascertainable that these plates are different than the normal buttons. 

## Schematic 

The schematic for this is reality straight forward. The Six buttons are all wired into their own channel. And the touch sensor is communicating with the Arduino through [something]. Finally all the audio comes out of the main audio outputs. 

**Could I have made it into a button matrix? Yes. Do I need to for this simple version? No.** 

For the sake of the current project, keeping everything simple is best. It is most important to make a basic working version of my idea rather than to have one part of my idea be perfect. 

## Code