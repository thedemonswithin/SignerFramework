//
//  GlobalMacros.h
//  MobileBanking
//
//  Created by power on 16.12.14.
//  Copyright (c) 2014 BPC. All rights reserved.
//


#define MB_DEFAULT_CONSTRUNCTORS_DISABLE \
- (instancetype)init NS_UNAVAILABLE; \
+ (instancetype)new NS_UNAVAILABLE;

#define MB_DEFAULT_CONSTRUNCTORS_DISABLE_NULLABLE \
- (instancetype _Nullable)init NS_UNAVAILABLE; \
+ (instancetype _Nullable)new NS_UNAVAILABLE;

