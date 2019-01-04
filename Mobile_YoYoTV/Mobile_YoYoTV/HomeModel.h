//
//  HomeModel.h
//  Mobile_YoYoTV
//
//  Created by li que on 2017/5/3.
//  Copyright © 2017年 li que. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HomeModel : NSObject

@property (nonatomic,strong) NSNumber *ID;
@property (nonatomic,copy) NSString *overview;
@property (nonatomic,copy) NSString *portrait_poster;
@property (nonatomic,copy) NSString *landscape_poster;
@property (nonatomic,copy) NSString *apple_poster;
@property (nonatomic,copy) NSString *vimeo_token;
@property (nonatomic) BOOL pay;
@property (nonatomic) BOOL livestream;
@property (nonatomic,copy) NSString *Description;
@property (nonatomic,copy) NSString *vimeo_id;
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *release_date;
@property (nonatomic,copy) NSString *sub_genre;
@property (nonatomic,copy) NSString *director;
@property (nonatomic,copy) NSString *cast1;
@property (nonatomic,copy) NSString *cast2;
@property (nonatomic,copy) NSString *cast3;
@property (nonatomic,copy) NSString *cast4;
@property (nonatomic,copy) NSNumber *eps;
@property (nonatomic,copy) NSNumber *pay_eps;
@property (nonatomic,copy) NSString *definition;
@property (nonatomic,strong) NSNumber *genre_id;
@property (nonatomic,copy) NSString *portrait_poster_b;
@property (nonatomic,copy) NSString *portrait_poster_m;
@property (nonatomic,copy) NSString *landscape_poster_s;
@property (nonatomic,copy) NSString *landscape_poster_m;
@property (nonatomic,copy) NSString *landscape_poster_b;
@property (nonatomic) BOOL isActivity;
@property (nonatomic,copy) NSString *activity_name;
@property (nonatomic,copy) NSString *image_activity;
@property (nonatomic,copy) NSString *en_name;
@property (nonatomic,copy) NSString *category;

@property (nonatomic,copy) NSString *attributes;
@property (nonatomic,copy) NSString *update_progress;
@property (nonatomic,copy) NSString *score;
@property (nonatomic,copy) NSString *subtitle;


+ (HomeModel *)modelWithDictionary:(NSDictionary *) dictionary;
+ (NSArray *) modelsWithArray:(NSArray *) array;

@end
