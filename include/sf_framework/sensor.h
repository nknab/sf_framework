/*
 * File: sensor.h
 * Project: SF Framework
 * File Created: Sunday, 20th February 2022 13:47:33
 * Author: nknab
 * Email: kojo.anyinam-boateng@outlook.com
 * Version: 1.0
 * Brief: 
 * -----
 * Last Modified: Monday, 21st February 2022 8:29:18
 * Modified By: nknab
 * -----
 * Copyright ©2022 nknab. All rights reserved.
 */

#ifndef SF_FRAMEWORK_SENSOR_H
#define SF_FRAMEWORK_SENSOR_H

namespace sff_sensor {
    class Sensor{

    protected:
        /**
         * @brief Construct a new Sensor object
         * 
         */
        virtual Sensor(){};

    public:
        /**
         * @brief Destroy the Sensor object
         * 
         */
        virtual ~Sensor(){};
    };
}
#endif //SF_FRAMEWORK_SENSOR_H
