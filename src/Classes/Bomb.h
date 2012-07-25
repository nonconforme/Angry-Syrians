//
//  Bomb.h
//
//  Created by Frederic Jacobs on 14/4/12.
//  GPL v3 -- http://www.gnu.org/copyleft/gpl.html
//

#import "SpaceManagerCocos2d.h"

@class Game;

@interface Bomb : cpCCSprite 
{
	Game *_game;
	BOOL _countDown;
    NSInteger bombPower;
    NSInteger bombRadius;
}

+(id) bombWithGame:(Game*)game;
+(id) bombWithGame:(Game*)game shape:(cpShape*)shape;;
-(id) initWithGame:(Game*)game;
-(id) initWithGame:(Game*)game shape:(cpShape*)shape;

-(void) startCountDown;
-(void) blowup;

@end
