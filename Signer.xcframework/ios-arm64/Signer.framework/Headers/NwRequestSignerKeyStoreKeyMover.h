//
//  NwRequestSignerKeyStoreKeyMover.h
//  MobileBanking
//
//  Created by Volkov_AS on 13/11/2017.
//  Copyright © 2017 BPC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConstructorDisablingMacro.h"
@class NwRequestSignerKeyStoreTagPair;
@class NwRequestSignerKeyStoreQueryMaker;

@interface NwRequestSignerKeyStoreKeyMover : NSObject

MB_DEFAULT_CONSTRUNCTORS_DISABLE;

- (instancetype)initWithQueryMaker:(NwRequestSignerKeyStoreQueryMaker *)queryMaker;

- (void)moveKeyPairWithTagPair:(NwRequestSignerKeyStoreTagPair *)sourceTagPair toTagPair:(NwRequestSignerKeyStoreTagPair *)destinationTagPair;

@end
