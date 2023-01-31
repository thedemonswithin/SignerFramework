//
//  NwRequestSignerKeyStoreKeyGenerator.h
//  MobileBanking
//
//  Created by Volkov_AS on 13/11/2017.
//  Copyright © 2017 BPC. All rights reserved.
//

#import <Foundation/Foundation.h>
@class NwRequestSignerKeyStoreTagPair;

@interface NwRequestSignerKeyStoreKeyGenerator : NSObject

- (void)generateTempKeyPair:(NSUInteger)keySize withTagPair:(NwRequestSignerKeyStoreTagPair *)tagPair;

@end
