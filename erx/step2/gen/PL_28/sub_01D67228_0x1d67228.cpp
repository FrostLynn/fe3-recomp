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

// Function: sub_01D67228
// Address: 0x1d67228 - 0x1d672f0
void sub_01D67228_0x1d67228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67228_0x1d67228");
#endif

    switch (ctx->pc) {
        case 0x1d6723cu: goto label_1d6723c;
        case 0x1d67250u: goto label_1d67250;
        case 0x1d67254u: goto label_1d67254;
        case 0x1d6728cu: goto label_1d6728c;
        case 0x1d672c8u: goto label_1d672c8;
        case 0x1d672d4u: goto label_1d672d4;
        default: break;
    }

    ctx->pc = 0x1d67228u;

    // 0x1d67228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6722c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6722cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67230: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d67234: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D67234u;
    SET_GPR_U32(ctx, 31, 0x1D6723Cu);
    ctx->pc = 0x1D67238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67234u;
    // 0x1d67238: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D67234u, 0x1D6723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6723Cu;
label_1d6723c:
    // 0x1d6723c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d6723cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67240: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D67240u;
    {
        const bool branch_taken_0x1d67240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D67244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67240u;
        // 0x1d67244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67240) {
            ctx->pc = 0x1D67264u;
            goto label_1d67264;
        }
    }
    ctx->pc = 0x1D67248u;
    // 0x1d67248: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D67248u;
    SET_GPR_U32(ctx, 31, 0x1D67250u);
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D67248u, 0x1D67250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67250u;
label_1d67250:
    // 0x1d67250: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d67250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d67254:
    // 0x1d67254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67258: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6725c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6725Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6725Cu;
        // 0x1d67260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6725Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67264u;
label_1d67264:
    // 0x1d67264: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D67264u;
    {
        const bool branch_taken_0x1d67264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67264u;
        // 0x1d67268: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67264) {
            ctx->pc = 0x1D67254u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d67254;
        }
    }
    ctx->pc = 0x1D6726Cu;
    // 0x1d6726c: 0x0  nop
    ctx->pc = 0x1d6726cu;
    // NOP
    // 0x1d67270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d6727c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6727cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67280: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d67280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d67284: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67284u;
    SET_GPR_U32(ctx, 31, 0x1D6728Cu);
    ctx->pc = 0x1D67288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67284u;
    // 0x1d67288: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67284u, 0x1D6728Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6728Cu;
label_1d6728c:
    // 0x1d6728c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d6728cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d67290: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d67290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d67294: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d67294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67298: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67298u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6729c: 0x8dee0084  lw          $t6, 0x84($t7)
    ctx->pc = 0x1d6729cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 132)));
    // 0x1d672a0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d672a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d672a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d672a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d672a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d672a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d672ac: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x1d672acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d672b0: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1d672b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1d672b4: 0x91cf0ee6  lbu         $t7, 0xEE6($t6)
    ctx->pc = 0x1d672b4u;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 3814)));
    // 0x1d672b8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D672B8u;
    {
        const bool branch_taken_0x1d672b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D672BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D672B8u;
        // 0x1d672bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d672b8) {
            ctx->pc = 0x1D672CCu;
            goto label_1d672cc;
        }
    }
    ctx->pc = 0x1D672C0u;
    // 0x1d672c0: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D672C0u;
    SET_GPR_U32(ctx, 31, 0x1D672C8u);
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D672C0u, 0x1D672C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D672C8u;
label_1d672c8:
    // 0x1d672c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d672c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d672cc:
    // 0x1d672cc: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D672CCu;
    SET_GPR_U32(ctx, 31, 0x1D672D4u);
    ctx->pc = 0x1D672D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D672CCu;
    // 0x1d672d0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D672CCu, 0x1D672D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D672D4u;
label_1d672d4:
    // 0x1d672d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d672d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d672d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d672d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d672dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d672dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d672e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d672e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d672e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d672e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d672e8: 0x87599c6  j           func_1D66718
    ctx->pc = 0x1D672E8u;
    ctx->pc = 0x1D672ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D672E8u;
    // 0x1d672ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66718u;
    sub_01D66718_0x1d66718(rdram, ctx, runtime); return;
    ctx->pc = 0x1D672F0u;
}
