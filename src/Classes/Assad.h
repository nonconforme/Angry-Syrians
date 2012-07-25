//
//  Assad.h
//
//  Created by Frederic Jacobs on 14/4/12.
//  GPL v3 -- http://www.gnu.org/copyleft/gpl.html
//

#import "SpaceManagerCocos2d.h"

@class Game;

@interface Assad : cpCCSprite 
{
	Game *_game;
	int _damage;
    float MAX_DAMAGE;
}

+(id) assadWithGame:(Game*)game;
+(id) assadWithGame:(Game*)game shape:(cpShape*)shape;
-(id) initWithGame:(Game*)game;
-(id) initWithGame:(Game*)game shape:(cpShape*)shape;

-(void) addDamage:(int)damage;

@end
