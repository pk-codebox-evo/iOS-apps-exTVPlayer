//
//  IGREXParser.h
//  exTVPlayer
//
//  Created by Vitalii Parovishnyk on 12/17/15.
//  Copyright © 2015 IGR Software. All rights reserved.
//

@interface IGREXParser : NSObject

typedef void (^IGREXParserCompleateBlock)(NSArray * _Nullable items);

+ (void)parseCatalogContent:(nonnull NSString *)aCatalogId
			 compleateBlock:(nonnull IGREXParserCompleateBlock)aCompleateBlock;

+ (void)parseVideoCatalogContent:(nonnull NSString *)aVideoCatalogId
				  compleateBlock:(nonnull IGREXParserCompleateBlock)aCompleateBlock;

+ (void)parseLiveVideoCatalogContent:(nonnull NSString *)aVideoCatalogId
					  compleateBlock:(nonnull IGREXParserCompleateBlock)aCompleateBlock;

+ (void)parseChanelContent:(nonnull NSString *)aChanelId
			compleateBlock:(nonnull IGREXParserCompleateBlock)aCompleateBlock;

+ (void)parseLiveSearchContent:(nullable NSString *)aSearchText
						  page:(NSUInteger)aPage
						chanel:(nullable NSString *)aCatalog
				compleateBlock:(nonnull IGREXParserCompleateBlock)aCompleateBlock;

+ (void)parseLiveChanel:(nonnull NSString *)aChanel
				   page:(NSUInteger)aPage
		 compleateBlock:(nonnull IGREXParserCompleateBlock)aCompleateBlock;

@end
