//
//  VTDCoreProtocol.h
//  objectionViper
//
//  Created by 崔 明辉 on 15/1/20.
//  Copyright (c) 2015年 多玩事业部 iOS开发组 YY Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^VTDCoreDataStoreFetchCompletionBlock)(NSArray *results);
typedef void(^VTDCoreDataStoreCommitCompletionBlock)();
typedef void(^VTDCoreDataStoreCommitFailureBlock)();

@class VTDManagedTodoItem;

@protocol VTDWireFrame <NSObject>

@end

@protocol VTDCoreDataStore <NSObject>

- (void)fetchEntriesWithEntryName:(NSString *)entryName
                        predicate:(NSPredicate *)predicate
                  sortDescriptors:(NSArray *)sortDescriptors
                  completionBlock:(VTDCoreDataStoreFetchCompletionBlock)completionBlock;

- (VTDManagedTodoItem *)newTodoItem;

- (void)saveWithCompletionBlock:(VTDCoreDataStoreCommitCompletionBlock)completionBlock
                   failureBlock:(VTDCoreDataStoreCommitFailureBlock)failureBlock;

@end
