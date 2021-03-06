
/*=========================================================================

Library:   MultipassUltrasound

Copyright 2010 Kitware Inc. 28 Corporate Drive,
Clifton Park, NY, 12065, USA.
All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

=========================================================================*/
#include <iostream>
#include <fstream>
class RegistrationParameters {
public: 
    float minFixedAngle, minMovingAngle, maxFixedAngle, maxMovingAngle;
    float minFixedStretch, minMovingStretch, maxFixedStretch, maxMovingStretch;
    
    
    RegistrationParameters(char* filename){
        std::ifstream  pFile;
	pFile.open(filename);
	pFile >> minFixedAngle;
	pFile >> minMovingAngle;
	pFile >> maxFixedAngle;
	pFile >> maxMovingAngle;
	pFile >> minFixedStretch;
	pFile >> minMovingStretch;
	pFile >> maxFixedStretch;
	pFile >> maxMovingStretch;
    }

    void print(){
        std::cout << minFixedAngle << minMovingAngle << maxFixedAngle << maxMovingAngle << 
	    minFixedStretch << minMovingStretch << maxFixedStretch << maxMovingStretch << std::endl;
    }
};
