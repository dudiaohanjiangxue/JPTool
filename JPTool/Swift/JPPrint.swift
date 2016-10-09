//
//  JPPrint.swift
//  JPTool
//
//  Created by KC on 16/10/9.
//  Copyright © 2016年 KC. All rights reserved.
//

import UIKit

class JPPrint: NSObject {

}

func XMGLog<T>(message : T, file : String = #file, lineNum : Int = #line) {
    
    #if DEBUG
        
        let filePath = (file as NSString).lastPathComponent
        print("\(filePath)  -  [\(lineNum)] : \(message)")
        
    #endif
}
