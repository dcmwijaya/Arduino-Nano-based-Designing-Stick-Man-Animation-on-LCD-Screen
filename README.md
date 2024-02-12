[![Open Source Love](https://badges.frapsoft.com/os/v1/open-source.svg?style=flat)](https://github.com/ellerbrock/open-source-badges/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?logo=github&color=%23F7DF1E)](https://opensource.org/licenses/MIT)
![GitHub last commit](https://img.shields.io/github/last-commit/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen)
![Project](https://img.shields.io/badge/Project-Arduino-light.svg?style=flat&logo=arduino&logoColor=white&color=%23F7DF1E)

# Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen
<strong>Solo Project: Stick Man Animation on LCD Screen</strong><br><br>
The stick man animation on this LCD is formed from special characters derived from the image pixels settings. Next, you need to arrange the layout of the image bytes in a column and row. To be able to move like an animation, you need to loop.

<br><br>

## Project Requirements
| Part | Description |
| --- | --- |
| Development Board | Arduino Nano V3 |
| Code Editor | Arduino IDE |
| Driver | USB-Serial CH340 |
| Programming Language | C/C++ |
| Arduino Library | LiquidCrystal I2C |
| Display | LCD I2C (x1) |
| Other Components | • Mini USB cable - USB type A (x1)<br>• Jumper cable (1 set) |

<br><br>

## Download & Install
1. Arduino IDE

   <table><tr><td width="810">

   ```
   https://www.arduino.cc/en/software
   ```

   </td></tr></table><br>

2. USB-Serial CH340

   <table><tr><td width="810">

   ```
   https://bit.ly/CH340_Driver
   ```

   </td></tr></table>
   
<br><br>

## Basic Knowledge
<img width="840" src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/9f1ce021-724e-478b-87a5-e8716d9d75da" alt="lcd-i2c">
<br><br>

<strong>The picture above explains that the 16x2 I2C LCD has :</strong>

<table><tr><td width="840">

• Columns -> ``` 16 ```

• Rows -> ``` 2 ```

• Bytes in each led matrix -> ``` 8 ```

• Bits in each led matrix -> in each row, there are ``` 5 ```

</td></tr></table>

<br><br>

## Project Designs
<table>
<tr>
<th width="420">Block Diagram</th>
<th width="420">Pictorial Diagram</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/86645f07-2b03-44b0-a649-1347747f9dbf" alt="Block-Diagram"></td>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/3e2b6786-8d2b-450b-9fa2-7ab93a2e1152" alt="Pictorial-Diagram"></td>
</tr>
</table>
<table>
<tr>
<th width="840">Wiring</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/516899d8-86c8-4ad7-b30a-7a641fe961bf" alt="Wiring"></td>
</tr>
</table>

<br><br>

## Arduino IDE Setup
1. Open the ``` Arduino IDE ``` first, then open this project by clicking ``` File ``` -> ``` Open ``` : 

   <table><tr><td width="810">
      
      ``` stickman_animation_lcd.ino ```

   </td></tr></table><br>
   
2. ``` Board Setup ``` in Arduino IDE

   <table><tr><td width="810">
      
      Click ``` Tools ``` -> ``` Board ``` -> ``` Arduino AVR Boards ``` -> ``` Arduino Nano ```

   </td></tr></table><br>

3. ``` Change Processor ``` in Arduino IDE

   <table><tr><td width="810">
      
      Click ``` Tools ``` -> ``` Processor ``` -> ``` ATmega328P (Old Bootloader) ```

   </td></tr></table><br>

4. ``` Install Library ``` in Arduino IDE

   <table><tr><td width="810">
      
      Download all the library zip files. Then paste it in the: ``` C:\Users\Computer_Username\Documents\Arduino\libraries ```

   </td></tr></table><br>

5. ``` Port Setup ``` in Arduino IDE

   <table><tr><td width="810">
      
      Click ``` Port ``` -> Choose according to your device port ``` (you can see in device manager) ```

   </td></tr></table><br>

6. Before uploading the program please click: ``` Verify ```.<br><br>

7. If there is no error in the program code, then please click: ``` Upload ```.<br><br>

8. If there is still a problem when uploading the program, then try to check the ``` driver ``` / ``` port ``` / ``` others ``` section.

<br><br>

## LCD Custom Character
To easily create a LCD Custom Character, you can access the link below.

   <table><tr><td width="810">
      
      ```
      https://maxpromer.github.io/LCD-Character-Creator/
      ```

   </td></tr></table>

<br><br>

## Get Started
1. Download and extract this repository.<br><br>
   
2. Make sure you have the necessary electronic components.<br><br>
   
3. Make sure your components are designed according to the diagram.<br><br>
   
4. Configure your device according to the settings above.<br><br>

5. Please enjoy [Done].

<br><br>

## Highlights
<table>
<tr>
<th width="420">Animation display-1</th>
<th width="420">Animation display-2</th>
</tr>
<tr>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/2a595eea-eddd-4437-bc9a-6fd36fc2099c" alt="display-1"></td>
<td><img src="https://github.com/devancakra/Arduino-Nano-based-Designing-Stick-Man-Animation-on-LCD-Screen/assets/54527592/3e1530d8-5c63-4401-af09-10768c10e239" alt="display-2"></td>
</tr>
</table>

<br><br>

## Disclaimer
This application has been created by including third-party sources. Third parties here are service providers, whose services are in the form of libraries, frameworks, and others. I thank you very much for the service. It has proven to be very helpful and implementable.

<br><br>

## LICENSE
MIT License - Copyright © 2024 - Devan C. M. Wijaya, S.Kom

Permission is hereby granted without charge to any person obtaining a copy of this software and the software-related documentation files to deal in them without restriction, including without limitation the right to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons receiving the Software to be furnished therewith on the following terms:

The above copyright notice and this permission notice must accompany all copies or substantial portions of the Software.

IN ANY EVENT, THE AUTHOR OR COPYRIGHT HOLDER HEREIN RETAINS FULL OWNERSHIP RIGHTS. THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, THEREFORE IF ANY DAMAGE, LOSS, OR OTHERWISE ARISES FROM THE USE OR OTHER DEALINGS IN THE SOFTWARE, THE AUTHOR OR COPYRIGHT HOLDER SHALL NOT BE LIABLE, AS THE USE OF THE SOFTWARE IS NOT COMPELLED AT ALL, SO THE RISK IS YOUR OWN.
