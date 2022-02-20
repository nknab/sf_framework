/*
 * File: filter.h
 * Project: SF Framework
 * File Created: Sunday, 20th February 2022 13:48:48
 * Author: nknab
 * Email: kojo.anyinam-boateng@outlook.com
 * Version: 1.0
 * Brief: 
 * -----
 * Last Modified: Sunday, 20th February 2022 13:48:48
 * Modified By: nknab
 * -----
 * Copyright ©2022 nknab. All rights reserved.
 */

#ifndef SF_FRAMEWORK_FILTER_H
#define SF_FRAMEWORK_FILTER_H

namespace sff_filter{
    class Filter{

    protected:
        virtual Filter(){};

    public:
        virtual ~Filter(){};
    };
}

#endif //SF_FRAMEWORK_FILTER_H
