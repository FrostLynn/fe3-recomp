#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D3E188
// Address: 0x1d3e188 - 0x1d3e250
void sub_01D3E188_0x1d3e188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3E188_0x1d3e188");
#endif

    switch (ctx->pc) {
        case 0x1d3e1a4u: goto label_1d3e1a4;
        case 0x1d3e1b4u: goto label_1d3e1b4;
        case 0x1d3e1c0u: goto label_1d3e1c0;
        case 0x1d3e1d0u: goto label_1d3e1d0;
        case 0x1d3e1e8u: goto label_1d3e1e8;
        case 0x1d3e214u: goto label_1d3e214;
        default: break;
    }

    ctx->pc = 0x1d3e188u;

    // 0x1d3e188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3e188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3e18c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d3e18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d3e190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d3e190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d3e194: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d3e194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3e198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3e198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e19c: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3E19Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E1A4u);
    ctx->pc = 0x1D3E1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E19Cu;
    // 0x1d3e1a0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3E19Cu, 0x1D3E1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E1A4u;
label_1d3e1a4:
    // 0x1d3e1a4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3e1a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3e1a8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3e1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d3e1ac: 0xc74f1c4  jal         func_1D3C710
    ctx->pc = 0x1D3E1ACu;
    SET_GPR_U32(ctx, 31, 0x1D3E1B4u);
    ctx->pc = 0x1D3E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E1ACu;
    // 0x1d3e1b0: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C710u, 0x1D3E1ACu, 0x1D3E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E1B4u;
label_1d3e1b4:
    // 0x1d3e1b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d3e1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d3e1b8: 0xc74ef16  jal         func_1D3BC58
    ctx->pc = 0x1D3E1B8u;
    SET_GPR_U32(ctx, 31, 0x1D3E1C0u);
    ctx->pc = 0x1D3E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E1B8u;
    // 0x1d3e1bc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC58u, 0x1D3E1B8u, 0x1D3E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E1C0u;
label_1d3e1c0:
    // 0x1d3e1c0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d3e1c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d3e1c4: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d3e1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d3e1c8: 0xc74f1c4  jal         func_1D3C710
    ctx->pc = 0x1D3E1C8u;
    SET_GPR_U32(ctx, 31, 0x1D3E1D0u);
    ctx->pc = 0x1D3E1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E1C8u;
    // 0x1d3e1cc: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C710u, 0x1D3E1C8u, 0x1D3E1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E1D0u;
label_1d3e1d0:
    // 0x1d3e1d0: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d3e1d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d3e1d4: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D3E1D4u;
    {
        const bool branch_taken_0x1d3e1d4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e1d4) {
            ctx->pc = 0x1D3E1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E1D4u;
            // 0x1d3e1d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3E23Cu;
            goto label_1d3e23c;
        }
    }
    ctx->pc = 0x1D3E1DCu;
    // 0x1d3e1dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d3e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3e1e0: 0xc74ef28  jal         func_1D3BCA0
    ctx->pc = 0x1D3E1E0u;
    SET_GPR_U32(ctx, 31, 0x1D3E1E8u);
    ctx->pc = 0x1D3E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E1E0u;
    // 0x1d3e1e4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BCA0u, 0x1D3E1E0u, 0x1D3E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E1E8u;
label_1d3e1e8:
    // 0x1d3e1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3e1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e1ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d3e1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e1f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d3e1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d3e1f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d3e1f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e1f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3e1f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e1fc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d3e1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3e200: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d3e200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d3e204: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3E204u;
    {
        const bool branch_taken_0x1d3e204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E204u;
        // 0x1d3e208: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e204) {
            ctx->pc = 0x1D3E238u;
            goto label_1d3e238;
        }
    }
    ctx->pc = 0x1D3E20Cu;
    // 0x1d3e20c: 0xc74ef22  jal         func_1D3BC88
    ctx->pc = 0x1D3E20Cu;
    SET_GPR_U32(ctx, 31, 0x1D3E214u);
    ctx->pc = 0x1D3BC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BC88u, 0x1D3E20Cu, 0x1D3E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E214u;
label_1d3e214:
    // 0x1d3e214: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d3e214u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3e218: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d3e218u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3e21c: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d3e21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d3e220: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d3e220u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d3e224: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d3e224u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3e228: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3E228u;
    {
        const bool branch_taken_0x1d3e228 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D3E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E228u;
        // 0x1d3e22c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e228) {
            ctx->pc = 0x1D3E23Cu;
            goto label_1d3e23c;
        }
    }
    ctx->pc = 0x1D3E230u;
    // 0x1d3e230: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d3e230u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3e234: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d3e234u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d3e238:
    // 0x1d3e238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3e238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3e23c:
    // 0x1d3e23c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d3e23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e240: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d3e240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d3e244: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3E244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3E248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E244u;
        // 0x1d3e248: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3E244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3E24Cu;
    // 0x1d3e24c: 0x0  nop
    ctx->pc = 0x1d3e24cu;
    // NOP
    ctx->pc = 0x1d3e250u;
}
