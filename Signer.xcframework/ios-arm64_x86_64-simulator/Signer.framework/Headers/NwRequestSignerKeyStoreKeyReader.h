//
//  NwRequestSignerKeyStoreKeyReader.h
//  MobileBanking
//
//  Created by Volkov_AS on 13/11/2017.
//  Copyright © 2017 BPC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConstructorDisablingMacro.h"
@class NwRequestSignerKeyStoreTagPair;
@class NwRequestSignerKeyStoreQueryMaker;
@class SignerKeyPair;

@interface NwRequestSignerKeyStoreKeyReader : NSObject

MB_DEFAULT_CONSTRUNCTORS_DISABLE;

- (instancetype)initWithQueryMaker:(NwRequestSignerKeyStoreQueryMaker *)queryMaker;

- (SignerKeyPair *)readKeyPairWithTagPair:(NwRequestSignerKeyStoreTagPair *)tagPair;

@end
