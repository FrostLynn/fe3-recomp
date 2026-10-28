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

// Function: sub_01C6B1B8
// Address: 0x1c6b1b8 - 0x1c6b2c8
void sub_01C6B1B8_0x1c6b1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6B1B8_0x1c6b1b8");
#endif

    switch (ctx->pc) {
        case 0x1c6b1e0u: goto label_1c6b1e0;
        case 0x1c6b220u: goto label_1c6b220;
        case 0x1c6b274u: goto label_1c6b274;
        default: break;
    }

    ctx->pc = 0x1c6b1b8u;

    // 0x1c6b1b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c6b1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c6b1bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6b1c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6b1c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6b1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6b1c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6b1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b1cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c6b1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c6b1d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c6b1d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b1d4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6b1d8: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6B1D8u;
    SET_GPR_U32(ctx, 31, 0x1C6B1E0u);
    ctx->pc = 0x1C6B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B1D8u;
    // 0x1c6b1dc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6B1D8u, 0x1C6B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B1E0u;
label_1c6b1e0:
    // 0x1c6b1e0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c6b1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c6b1e4: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1c6b1e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6b1e8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c6b1e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c6b1ec: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1c6b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1c6b1f0: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1c6b1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1c6b1f4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1c6b1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1c6b1f8: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1c6b1f8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c6b1fc: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1c6b1fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c6b200: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1c6b200u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c6b204: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1c6b204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1c6b208: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1c6b208u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1c6b20c: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1c6b20cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1c6b210: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1c6b210u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1c6b214: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1c6b214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1c6b218: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6B218u;
    SET_GPR_U32(ctx, 31, 0x1C6B220u);
    ctx->pc = 0x1C6B21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B218u;
    // 0x1c6b21c: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6B218u, 0x1C6B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B220u;
label_1c6b220:
    // 0x1c6b220: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1c6b220u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6b224: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c6b224u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c6b228: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1c6b228u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6b22c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c6b22cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b230: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c6b230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c6b234: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1c6b234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b238: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1c6b238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1c6b23c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1c6b23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1c6b240: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1c6b240u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c6b244: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1c6b244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b248: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1c6b248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1c6b24c: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1c6b24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1c6b250: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1c6b250u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1c6b254: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1c6b254u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c6b258: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1c6b258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1c6b25c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1c6b25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b260: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1c6b260u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1c6b264: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1c6b264u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1c6b268: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1c6b268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1c6b26c: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1c6b26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1c6b270: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1c6b270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1c6b274:
    // 0x1c6b274: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1c6b274u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1c6b278: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1c6b278u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1c6b27c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1c6b27cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1c6b280: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1c6b280u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1c6b284: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c6b284u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c6b288: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1c6b288u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1c6b28c: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1c6b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1c6b290: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1c6b290u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1c6b294: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1c6b294u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1c6b298: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1c6b298u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1c6b29c: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1c6b29cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1c6b2a0: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1c6b2a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1c6b2a4: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C6B2A4u;
    {
        const bool branch_taken_0x1c6b2a4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B2A4u;
        // 0x1c6b2a8: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b2a4) {
            ctx->pc = 0x1C6B274u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6b274;
        }
    }
    ctx->pc = 0x1C6B2ACu;
    // 0x1c6b2ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6b2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b2b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6b2b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6b2b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6b2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b2b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c6b2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B2BCu;
        // 0x1c6b2c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B2C4u;
    // 0x1c6b2c4: 0x0  nop
    ctx->pc = 0x1c6b2c4u;
    // NOP
    ctx->pc = 0x1c6b2c8u;
}
