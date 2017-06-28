//
//  WebViewController.h
//  wxDemo
//
//  Created by zhj on 2017/6/27.
//  Copyright © 2017年 pabula. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface WebViewController : UIViewController

@property (strong, nonatomic) WKWebView *webView;
@property (strong, nonatomic) NSString *url;
@end
