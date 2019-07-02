# iWhiskers
Sophomore Engineering Design Project

# Inspiration
For our Sophomore Design Project we were given the task of developing a smart mousetrap that would capture household mice without causing them any harm.

# What it does
iWhiskers captures household mice without causing them any harm and notifies the user through visual, auditory, and smartphone notifications. It captures them and alerts the user using a built-in LED light and buzzer. The onboard Arduino sends notifications to the Arduino IoT dashboard for the device.

# How we built it
It is an Internet-of-Things device powered by an Arduino MKR WiFi 1010 flashed with an experimental beta version of Arduino IoT cloud. The Arduino IoT Cloud code developed handles motion detection, opening and closing of entry points, visual and auditory notifications, and connection to a smartphone. When a mouse enters the device a motion sensor detects its entry and changes a boolean. When this boolean is set to true, an LED light and sound buzzer will activate and display a message in the online dashboard. Afterwards, the user may press a physical button or a button on the online dashboard to release a solenoid that will open the exit door to allow the mouse to exit the device. All variables and data points were accessible through an online dashboard for added convenience.
