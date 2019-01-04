//
//  CollectionModel.m
//  Mobile_YoYoTV
//
//  Created by li que on 2017/11/28.
//  Copyright © 2017年 li que. All rights reserved.
//

#import "CollectionModel.h"

@implementation CollectionModel

- (instancetype) initWithDictionary:(NSDictionary *)dic {
    if (self = [super init]) {
        NSString *newID = [dic valueForKey:@"id"];
        NSMutableDictionary *newDic = [NSMutableDictionary dictionaryWithDictionary:dic];
        [newDic removeObjectForKey:@"id"];
        [newDic setObject:newID forKey:@"ID"];
        [self setValuesForKeysWithDictionary:newDic];
    }
    return self;
}

+ (CollectionModel *)modelWithDictionary:(NSDictionary *) dic{
    CollectionModel *model = [[CollectionModel alloc] initWithDictionary:dic];
    return model;
}

+ (NSArray *) modelsWithArray:(NSArray *) array {
    NSMutableArray *mutableArray = [NSMutableArray arrayWithCapacity:0];
    if (array.count >= 1) {
        for (int i = 0; i < array.count; i++) {
            CollectionModel *model = [CollectionModel modelWithDictionary:array[i]];
            [mutableArray addObject:model];
        }
        return (NSArray *)mutableArray;
    }
    else {
        return nil;
    }
}

- (void) setValue:(id)value forUndefinedKey:(NSString *)key {
    NSLog(@"class name>>> %@ ----UndefinedKey:%@",NSStringFromClass([self class]),key);
}


@end
