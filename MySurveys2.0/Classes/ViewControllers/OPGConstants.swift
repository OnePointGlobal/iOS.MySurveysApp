//
//  OPGConstants.swift
//  MySurveys2.0
//
//  Created by Manjunath on 06/06/17.
//  Copyright © 2017 Chinthan. All rights reserved.
//

import Foundation

class OPGConstants {

    struct sdk {
    // SDK Constants define here.
    static let AppVersion = "MySurveysApp-IOS-2.1.4-A"
    static let Username = "MySurveys2.0"
    static let SharedKey = "5ed49012-5321-411c-951e-ffca8e4f1f61"

    static let DatabaseVersion: Int32 = 3
   }

  struct device {
   // Device constants define here.
    static let iPadPortraitHeight: CGFloat = 1024
    static let iPadPortraitWidth: CGFloat = 768

    static let iPadLandscapeHeight: CGFloat = 768
    static let iPadLandscapeWidth: CGFloat = 1024

    static let iPadRetinaPortraitHeight: CGFloat = 2048
    static let iPadRetinaPortraitWidth: CGFloat = 1536

    static let iPadRetinaLandscapeHeight: CGFloat = 1536
    static let iPadRetinaLandscapeWidth: CGFloat = 2048

    static let iPhone4Height: CGFloat = 480
    static let iPhone5Height: CGFloat = 568
    static let iPhone6And7Height: CGFloat = 667
    static let iPhone6PlusAnd7PlusHeight: CGFloat = 736
    static let iPhoneXHeight: CGFloat = 812

   }
}
