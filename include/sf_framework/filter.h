/*
 * File: filter.h
 * Project: SF Framework
 * File Created: Sunday, 20th February 2022 13:48:48
 * Author: nknab
 * Email: kojo.anyinam-boateng@outlook.com
 * Version: 1.0
 * Brief: 
 * -----
 * Last Modified: Monday, 21st February 2022 8:29:54 AM
 * Modified By: nknab
 * -----
 * Copyright ©2022 nknab. All rights reserved.
 */

#ifndef SF_FRAMEWORK_FILTER_H
#define SF_FRAMEWORK_FILTER_H

namespace sff_filter{
    class Filter{

    protected:
        /**
        * @brief Construct a new Filter object
        * 
        */
        virtual Filter(){};

    public:
        /**
        * @brief Destroy the Filter object
        * 
        */
        virtual ~Filter(){};
    };
}

#endif //SF_FRAMEWORK_FILTER_H
