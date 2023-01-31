//
//  NwRequestSignerKeyStoreTagPair.h
//  MobileBanking
//
//  Created by Volkov_AS on 13/11/2017.
//  Copyright © 2017 BPC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConstructorDisablingMacro.h"

@interface NwRequestSignerKeyStoreTagPair : NSObject

MB_DEFAULT_CONSTRUNCTORS_DISABLE;

- (instancetype)initWithLogin:(NSString *)login;
- (instancetype)initTempTagPair;

- (id)publicTag;
- (id)privateTag;

@end
