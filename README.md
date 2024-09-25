# Recipe Software for ESP32 display

This repository contains the software for a project using an ESP32-S3 with a 7-inch 800x480 display. This project aims to make cooking easier and more interactive by using step-by-step instruction screens, providing a database of different recipes, curating a shopping list for these ingredients, with the potential further addition of ratings and comments.

## Achieved goals:

- ESP32-S3 can display graphics on the LCD using hardware specific drivers
- Framework for the UI is complete
- Interactivity between the UI and background processes has been implemented with the timer

## Next steps:

- Configure Wi-Fi connection on the ESP32 without modifying the flash, as this is corrupting the display
- Update the recipes on the UI using background processes
- Set up API to get recipes
