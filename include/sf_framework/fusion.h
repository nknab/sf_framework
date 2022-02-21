/*
 * File: fusion.h
 * Project: SF Framework
 * File Created: Sunday, 20th February 2022 13:49:34
 * Author: nknab
 * Email: kojo.anyinam-boateng@outlook.com
 * Version: 1.0
 * Brief: 
 * -----
 * Last Modified: Monday, 21st February 2022 8:30:33 AM
 * Modified By: nknab
 * -----
 * Copyright ©2022 nknab. All rights reserved.
 */

#ifndef SF_FRAMEWORK_FUSION_H
#define SF_FRAMEWORK_FUSION_H

namespace sff_fusion {

    template<class Sensors, class Filter>
    class Fusion{
    private:
        Sensors m_sensors;
        Filter m_filter

    protected:
        /**
        * @brief Construct a new Fusion object
        * 
        * @param _sensors 
        * @param _filter 
        */
        Fusion(Sensors _sensors, Filter _filter) : m_sensors(_sensors), m_filter(_filter) {};

    public:
        /**
        * @brief Destroy the Fusion object
        * 
        */
        virtual ~Fusion(){};
    };
}

#endif //SF_FRAMEWORK_FUSION_H
