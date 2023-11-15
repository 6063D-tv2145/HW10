## HW10

**1.Description of how you encoded seconds into lights.**

I have one led light up after 10 seconds, signalling 60 seconds, then all the leds turn off and start up again one by one after 10 seconds.
for my layout, I used 3 yellow and 3 red bulbs, simulating the lighting on my sunrise allarm clock.

Initially, I was able to code the sequence just based on real millis (i.e. from 0 to 60,000), and with the professor's help I implemented an array's mechanism, to be able to iterate over the 6 pins based on the intervals of time passed, not just depending on the current millis value. Additionally, I had to work around the fact that in fact at 60s, the last led would light up but I wanted the clock to reset at 60s, so I out the reset timer to 60.1s to still showcase the last led lighting up.
  
**2. Schematic**
![GC514w.jpg](https://imgpile.com/images/GC514w.jpg)
![GC5IGF.jpg](https://imgpile.com/images/GC5IGF.jpg)
 
