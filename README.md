# Gesture Controlled Robotic Arm

This project focuses on replicating your hand movements to the robotic arm through deeplearning model and openCV. So, no extra sensors are required except a laptop with a working webcam.

## Robotic Arm

![Arm](https://github.com/ShivamGoyal1899/MiniRoboticArm_GestureRecognition/blob/master/livePhoto.png)

## Convolutional Neural Network

![Neural Net](https://github.com/ShivamGoyal1899/MiniRoboticArm_GestureRecognition/blob/master/CNN.png)

## Getting Strated 

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

1) To install the dependencies, you need to ``install`` the following:

- python 3.7
- tensorflow
- tflearn
- openCV-python
- numpy
- py-serial
- scikit-learn 

2) Install any arduino IDE and upload the code present in ``arduinoCode`` folder.

3) Run ``trainDeepNeuralNet.ipynb`` to train the neural network.

4) Finally run the ``runModel.ipynb`` to run the real time prediction.

## Hardware 

- Adafruit Motor Shield
- Arduino Uno
- Robotic Arm

## Versioning

We use [SemVer](http://semver.org/) for versioning.

## Contributing

Please feel free to contribute. We would love to see pull requests from you guys.

## Authors

* **Mankaran Singh**  
* **Shivam Goyal** 
* **Utkarsh Mishra** 
* **Jaskeerat Singh**
