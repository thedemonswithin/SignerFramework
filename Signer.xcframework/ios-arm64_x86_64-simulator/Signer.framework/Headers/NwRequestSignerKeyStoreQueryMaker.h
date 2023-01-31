//
//  NwRequestSignerKeyStoreQueryMaker.h
//  MobileBanking
//
//  Created by Volkov_AS on 13/11/2017.
//  Copyright © 2017 BPC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NwRequestSignerKeyStoreQueryMaker : NSObject

- (NSDictionary *)keychainQueryWithTag:(id)tag;
- (NSDictionary *)keychainQueryReturnDataWithTag:(id)tag;
- (NSDictionary *)keychainQueryReturnRefWithTag:(id)tag;

@end
