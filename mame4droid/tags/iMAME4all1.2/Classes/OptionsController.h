/*
 * This file is part of iMAME4all.
 *
 * Copyright (C) 2010 David Valdeita (Seleuco)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * In addition, as a special exception, Seleuco
 * gives permission to link the code of this program with
 * the MAME library (or with modified versions of MAME that use the
 * same license as MAME), and distribute linked combinations including
 * the two.  You must obey the GNU General Public License in all
 * respects for all of the code used other than MAME.  If you modify
 * this file, you may extend this exception to your version of the
 * file, but you are not obligated to do so.  If you do not wish to
 * do so, delete this exception statement from your version.
 */

#import <UIKit/UIKit.h>

@interface Options : NSObject
{
   NSMutableArray*	  optionsArray;

   @public  int keepAspectRatio;
   @public  int smoothedPort;
   @public  int smoothedLand;
   @public  int safeRenderPath;

   @public  int tvFilterPort;
   @public  int tvFilterLand;
   @public  int scanlineFilterPort;
   @public  int scanlineFilterLand;

   @public  int showFPS;
   @public  int animatedButtons;
   @public  int lowlatencySound;
   @public  int fourButtonsLand;
   @public  int fullLand;


}

- (void)loadOptions;
- (void)saveOptions;

@property (readwrite,assign) int keepAspectRatio;
@property (readwrite,assign) int smoothedPort;
@property (readwrite,assign) int smoothedLand;
@property (readwrite,assign) int safeRenderPath;

@property (readwrite,assign) int tvFilterPort;
@property (readwrite,assign) int tvFilterLand;

@property (readwrite,assign) int scanlineFilterPort;
@property (readwrite,assign) int scanlineFilterLand;

@property (readwrite,assign) int showFPS;
@property (readwrite,assign) int animatedButtons;
@property (readwrite,assign) int lowlatencySound;
@property (readwrite,assign) int fourButtonsLand;
@property (readwrite,assign) int fullLand;

@end


@interface OptionsController : UIViewController  <UITableViewDelegate, UITableViewDataSource>
{

   UISwitch*		  switchKeepAspect;
   UISwitch*		  switchSmoothedPort;
   UISwitch*		  switchSmoothedLand;
   UISwitch*		  switchSafeRender;

   UISwitch*		  switchTvFilterPort;
   UISwitch*		  switchScanlineFilterPort;


   UISwitch*		  switchTvFilterLand;
   UISwitch*		  switchScanlineFilterLand;

   UISwitch*		  switchShowFPS;
   UISwitch*		  switchAnimatedButtons;
   UISwitch*		  switchLowlatencySound;
   UISwitch*		  switch4buttonsLand;
   UISwitch*		  switchfullLand;

}

- (void)optionChanged:(id)sender;


@end
