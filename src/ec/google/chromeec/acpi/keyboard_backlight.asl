/* SPDX-License-Identifier: GPL-2.0-only */

Scope (\_SB)
{
	/*
	 * Chrome EC Keyboard Backlight interface
	 */
	Device (KBLT)
	{
		Name (_HID, "GOOG0002")
#ifdef CONFIG_ACPI_SUBSYSTEM_ID
		Name (_SUB, CONFIG_ACPI_SUBSYSTEM_ID)
#endif
		Name (_UID, 1)

		/* Ask EC if we even have a backlight
		 * Return 0xf (present, enabled, show in UI, functioning) or 0
		 *
		 * With older EC codebases that don't support the Device
		 * Features bitfield, this reports the keyboard backlight as
		 * enabled since reads to undefined addresses in EC address
		 * space return 0xff and so KBLE will be 1.
		 */
		Method (_STA, 0, NotSerialized)
		{
			Return (0xf)
		}

		/* Read current backlight value */
		Method (KBQC, 0, NotSerialized)
		{
			Return (\_SB.PCI0.LPCB.EC0.KBLV)
		}

		/* Write new backlight value */
		Method (KBCM, 1, NotSerialized)
		{
			Store (Arg0, \_SB.PCI0.LPCB.EC0.KBLV)
		}
	}
}
