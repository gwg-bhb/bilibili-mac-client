//
//  PlayerView.h
//  bilibili
//
//  Created by TYPCN on 2015/3/30.
//  Copyleft 2016 TYPCN. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "WebTabView.h"

@interface PlayerView : NSViewController
@property (weak) IBOutlet NSTextField *textTip;
@property (weak) IBOutlet NSTextField *subtip;
@property (weak) IBOutlet NSImageView *loadingImage;
@property (strong) NSWindowController* liveChatWindowC;

- (NSDictionary *) getVideoInfo:(NSString *)url;
- (NSString *) getComments:(NSNumber *)width :(NSNumber *)height;
- (void)LoadVideo;

@end


@interface PlayerWindow : NSWindow <NSWindowDelegate>

@property (strong) NSWindowController* postCommentWindowC;

-(void)keyDown:(NSEvent*)event;

@end