//
//  Shabiha.h
//
//  Created by Frederic Jacobs on 14/4/12.
//  GPL v3 -- http://www.gnu.org/copyleft/gpl.html
//

#import "SpaceManagerCocos2d.h"

@class Game;

@interface Shabiha : cpCCSprite 
{
	Game *_game;
	int _damage;
}

+(id) shabihaWithGame:(Game*)game;
+(id) shabihaWithGame:(Game*)game shape:(cpShape*)shape;
-(id) initWithGame:(Game*)game;
-(id) initWithGame:(Game*)game shape:(cpShape*)shape;

-(void) addDamage:(int)damage;

@end
