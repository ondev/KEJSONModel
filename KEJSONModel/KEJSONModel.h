//
//  KEJSONModel.h
//  KEJSONModel
//
//  Created by Kelvin Chan on 7/4/13.
//  Copyright (c) 2013 Kelvin Chan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KEJSONModel : NSObject

+(NSDictionary *)jsonKeyToObjectPropertyNameMap;

-(id)initWithDictionary:(NSMutableDictionary *)jsonObject;

@end
