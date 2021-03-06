/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */




@protocol SBIconViewDelegate <NSObject>
@optional
- (BOOL)iconAllowJitter:(id)jitter;
- (BOOL)iconPositionIsEditable:(id)editable;
- (void)iconHandleLongPress:(id)press;
- (void)iconTouchBegan:(id)began;
- (void)icon:(id)icon touchMovedWithEvent:(id)event;
- (void)icon:(id)icon touchEnded:(BOOL)ended;
- (BOOL)iconShouldAllowTap:(id)icon;
- (void)iconTapped:(id)tapped;
- (BOOL)icon:(id)icon canReceiveGrabbedIcon:(id)icon2;
- (void)icon:(id)icon closeFolderAnimated:(BOOL)animated;
- (void)icon:(id)icon openFolder:(id)folder animated:(BOOL)animated;
- (int)closeBoxTypeForIcon:(id)icon;
- (void)iconCloseBoxTapped:(id)tapped;
- (BOOL)iconShouldPrepareGhostlyImage:(id)icon;
- (BOOL)iconViewDisplaysBadges:(id)badges;
@end

